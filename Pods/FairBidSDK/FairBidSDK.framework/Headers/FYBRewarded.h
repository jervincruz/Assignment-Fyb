//
//
// Copyright (c) 2020 Fyber. All rights reserved.
//
//

#import <Foundation/Foundation.h>
#import <FairBidSDK/FYBRewardedDelegate.h>
#import <FairBidSDK/FYBShowOptions.h>

/**
 * Rewarded is used to show a fullscreen rewarded ad where a user must complete some task
 * (e.g. watch a video until the end, perform some action, ...) to get a reward.
 */
@interface FYBRewarded : NSObject

/**
 * The delegate to receive the messages listed in the `FYBRewardedDelegate` protocol.
 */
@property (class, nonatomic, nullable) id <FYBRewardedDelegate> delegate;

/**
 *  The amount of Rewarded impressions for this session.
 */
@property (class, nonatomic, readonly) NSUInteger impressionDepth;

/**
 * Requests a Rewarded ad for the given placement.
 *
 * @param placementId the identifier of the placement to be requested.
 */
+ (void)request:(nonnull NSString *)placementId;

/**
 * Whether or not an ad is available to show for the given placement.
 *
 * @param placementId the identifier of the placement to be shown.
 *
 * @return YES if Rewarded ad is available to be shown, NO otherwise
 */
+ (BOOL)isAvailable:(nonnull NSString *)placementId;

/**
 * Shows a Rewarded ad for a given placement, if available.
 *
 * @param placementId the identifier of the placement to be shown.
 */
+ (void)show:(nonnull NSString *)placementId;

/**
 * Shows a Rewarded ad with the given options.
 *
 * @param placementId the identifier of the placement to be shown.
 *
 * @param options FYBShowOptions object containing properties for configuring how the ad is shown.
 */
+ (void)show:(nonnull NSString *)placementId options:(nonnull FYBShowOptions *)options;

/**
 * Stops the auto request for a rewarded ad when it's no longer needed.
 *
 * @param placementId the identifier of the placement to stop requesting.
 */
+ (void)stopRequesting:(nonnull NSString *)placementId;

@end
