//
//
// Copyright (c) 2020 Fyber. All rights reserved.
//
//

#import <Foundation/Foundation.h>
#import <FairBidSDK/FYBInterstitialDelegate.h>
#import <FairBidSDK/FYBShowOptions.h>

/**
 * Class responsible for managing Interstitial ads.
 */
@interface FYBInterstitial : NSObject

/**
 * The delegate to receive the messages listed in the `FYBInterstitialDelegate` protocol.
 */
@property (class, nonatomic, nullable) id <FYBInterstitialDelegate> delegate;

/**
 *  The amount of Interstitial impressions for this session.
 */
@property (class, nonatomic, readonly) NSUInteger impressionDepth;

/**
 * Requests an Interstitial ad for the given placement.
 *
 * @param placementId the identifier of the placement to be requested.
 */
+ (void)request:(nonnull NSString *)placementId;

/**
 * Whether or not an ad is available to show for the given placement.
 *
 * @param placementId the identifier of the placement to be shown.
 *
 * @return YES if an Interstitial ad is available to be shown, NO otherwise
 */
+ (BOOL)isAvailable:(nonnull NSString *)placementId;

/**
 * Shows an Interstitial ad for a given placement, if available.
 *
 * @param placementId the identifier of the placement to be shown.
 */
+ (void)show:(nonnull NSString *)placementId;

/**
 * Shows an Interstitial ad with the given options.
 *
 * @param placementId the identifier of the placement to be shown.
 *
 * @param options FYBShowOptions object containing properties for configuring how the ad is shown.
 */
+ (void)show:(nonnull NSString *)placementId options:(nonnull FYBShowOptions *)options;

/**
 * Stops the auto request for an Interstitial ad when it's no longer needed.
 *
 * @param placementId the identifier of the placement to stop requesting.
 */
+ (void)stopRequesting:(nonnull NSString *)placementId;

@end
