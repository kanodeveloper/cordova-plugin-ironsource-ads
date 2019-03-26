# IronSource Ads Cordova Plugin (Kano Games Internal Version)
# <img src="https://github.com/charlesbodman/cordova-plugin-ironsource-ads/blob/master/images/ironsource_logo.png?raw=true" width="500"  />

<p align="left">
<img src="https://img.shields.io/badge/State-In%20Development-yellowgreen.svg?style=flat-square">
<img src="https://img.shields.io/badge/IronSource%20Framework%20Version-6.8.2-blue.svg?style=flat-square">
</p>

--------

## Table of Contents

- [State of Development](#state-of-development)
- [Install](#install)
- [Usage](#usage)
- [Official IronSource Documentation](http://developers.ironsrc.com/)


## State of Development
- [x] <img src="https://img.shields.io/badge/-Complete-brightgreen.svg?label=Rewarded%20Video%20Support&style=flat-square">
- [x] <img src="https://img.shields.io/badge/-Complete-brightgreen.svg?label=Offerwall%20Support&style=flat-square">
- [x] <img src="https://img.shields.io/badge/-Complete-brightgreen.svg?label=Interstitial%20Support&style=flat-square">
- [ ] <img src="https://img.shields.io/badge/-In%20Development-yellow.svg?label=Banner%20Support&style=flat-square">

-------- 

## Install

```bash
cordova plugin add cordova-plugin-ironsource-ads
```

-------- 
## Usage

- [Initialization](#initialization)
- [Validate Integration](#validate-integration)
- [Set Dynamic User ID](#set-dynamic-user-id)
- [Rewarded Videos](#rewarded-videos)
  - [Has Rewarded Video](#has-rewarded-video)
  - [Show Rewarded Video](#show-rewarded-video)
  - [Rewarded Video Events](#rewarded-video-events)
- [Interstitials](#interstitials)
  - [Has Interstitial](#has-interstitial)
  - [Load Interstitial](#load-interstitial)
  - [Show Interstitial](#show-interstitial)
  - [Interstitial Events](#interstitial-events)
- [Offerwalls](#offerwalls)
  - [Has Offerwall](#has-offerwall)
  - [Show Offerwall](#show-offerwall)
  - [Offerwall Events](#offerwall-events)
  
  
All methods support optional `onSuccess` and `onFailure` parameters

### Initialization
```javascript
IronSourceAds.init({
    appKey: appKey
});
```

### Validate Integration
Once you have finished your integration, call the following function and confirm that everything in your integration is marked as **VERIFIED**:

```javascript
IronSourceAds.validateIntegration();
```


**Check xcode / android studio debugger for validation output**
<img src="https://github.com/charlesbodman/cordova-plugin-ironsource-ads/blob/master/images/integration_helper.png"/>

***
### Set Dynamic User ID
> The Dynamic UserID is a parameter that can be changed throughout the session and will be received in the server-to-server ad > rewarded callbacks. This parameter helps verify AdRewarded transactions and must be set before calling ShowRV.
```javascript
IronSourceAds.setDynamicUserId({userId:'example'});
```
***
### Rewarded Videos

#### Has Rewarded Video

```javascript
IronSourceAds.hasRewardedVideo({
    onSuccess: function (available) {

    }
});
```

#### Show Rewarded Video
```javascript
IronSourceAds.showRewardedVideo();
```

#### Rewarded Video Events


**Rewarded Video Availabilty Changed**
```javascript
window.addEventListener("rewardedVideoAvailabilityChanged", function(event){

    var available = event.available;
    
});
```
**Rewarded Video Rewarded**
```javascript
window.addEventListener("rewardedVideoRewardReceived", function(event){

    var placement = event.placement;
    var placementName = placement.placementName;
    var rewardAmount = placement.rewardAmount;
    var rewardName = placement.rewardName;
    
});
```
**Rewarded Video Started**
```javascript
window.addEventListener("rewardedVideoStarted", function(){

});
```
**Rewarded Video Ended**
```javascript
window.addEventListener("rewardedVideoEnded", function(){

});
```
**Rewarded Video Opened**
```javascript
window.addEventListener("rewardedVideoOpened", function(){

});
```
**Rewarded Video Closed**
```javascript
window.addEventListener("rewardedVideoClosed", function(){

});
```
**Rewarded Video Failed**
```javascript
window.addEventListener("rewardedVideoFailed", function(){

});
```
***
### Interstitial

#### Has Interstitial
```javascript
IronSourceAds.hasInterstitial({
    onSuccess: function (available) {

    }
});
```
#### Load Interstitial
_Must be called before `showInterstitial`
```javascript
IronSourceAds.loadInterstitial();
```
***
#### Show Interstitial
```javascript
IronSourceAds.showInterstitial();
```
***
#### Interstitial Events

**Interstitial Loaded**
```javascript
window.addEventListener("interstitialLoaded", function(){

});
```
**Interstitial Shown**
```javascript
window.addEventListener("interstitialShown", function(){

});
```
**Interstitial Show Failed**
```javascript
window.addEventListener("interstitialShowFailed", function(){

});
```
**Interstitial Clicked**
```javascript
window.addEventListener("interstitialClicked", function(){

});
```
**Interstitial Closed**
```javascript
window.addEventListener("interstitialClosed", function(){

});
```
**Interstitial Will Open**
```javascript
window.addEventListener("interstitialClosed", function(){

});
```
**Interstitial Failed To Load**
```javascript
window.addEventListener("interstitialFailedToLoad", function(){

});
```
***

### Offerwalls

#### Has Offerwall

```javascript
IronSourceAds.hasOfferwall({
    onSuccess: function (available) {

    }
});
```

#### Show Offerwall
```javascript
IronSourceAds.showOfferwall();
```

#### Offerwall Events

**Offerwall Availability Changed**
```javascript
window.addEventListener("offerwallAvailabilityChanged", function(event){
  var available = event.available;
});
```

**Offerwall Shown**
```javascript
window.addEventListener("offerwallShown", function(){

});
```
**Offerwall Credit Recieved**
```javascript
window.addEventListener("offerwallCreditReceived", function(event){
  
  var credits = event.credits; // The number of credits the user has earned since //the last (void)didReceiveOfferwallCredits:
  var totalCredits = event.totalCredits; //The total number of credits ever earned by the user
  
});
```
**Offerwall Credit Failed**
```javascript
window.addEventListener("offerwallCreditFailed", function(){

});
```
**Offerwall Closed**
```javascript
window.addEventListener("offerwallClosed", function(){

});
```
**Offerwall Show Failed**
```javascript
window.addEventListener("offerwallShowFailed", function(){

});
```
