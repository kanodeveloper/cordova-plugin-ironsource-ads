#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <IronSource/IronSource.h>

@interface IronSourceAdsPlugin : CDVPlugin <ISRewardedVideoDelegate, ISBannerDelegate, ISOfferwallDelegate, ISInterstitialDelegate>

- (void)init:(CDVInvokedUrlCommand *)command;

- (void)setUserId:(CDVInvokedUrlCommand *)command;

- (void)validateIntegration:(CDVInvokedUrlCommand *)command;

- (void)showRewardedVideo:(CDVInvokedUrlCommand *)command;

- (void)hasRewardedVideo:(CDVInvokedUrlCommand *)command;

- (void)showBanner:(CDVInvokedUrlCommand *)command;

- (void)showOfferwall:(CDVInvokedUrlCommand *)command;

- (void)hasOfferwall:(CDVInvokedUrlCommand *)command;

- (void)hasInterstitial:(CDVInvokedUrlCommand *)command;

- (void)showInterstitial:(CDVInvokedUrlCommand *)command;

- (void)loadInterstitial:(CDVInvokedUrlCommand *)command;

@end