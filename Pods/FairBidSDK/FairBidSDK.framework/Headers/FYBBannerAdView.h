//
//
// Copyright (c) 2020 Fyber. All rights reserved.
//
//

#import <UIKit/UIKit.h>
#import <FairBidSDK/FYBBannerOptions.h>

/**
 *  A view containing a mediated banner ad.
 */
@interface FYBBannerAdView : UIView

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;

/**
 *  Banner options with which the banner view was loaded.
 */
@property (nonatomic, readonly, copy) FYBBannerOptions *options;

@end
