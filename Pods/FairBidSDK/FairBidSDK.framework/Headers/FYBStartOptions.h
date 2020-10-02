//
//
// Copyright (c) 2020 Fyber. All rights reserved.
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, FYBLoggingLevel) {
    FYBLoggingLevelSilent,
    FYBLoggingLevelError,
    FYBLoggingLevelInfo,
    FYBLoggingLevelVerbose
};

/**
 * Options used when starting the FairBid SDK in order to change the default behaviour.
 */
@interface FYBStartOptions : NSObject

/**
 * Defines the log level of FairBid SDK
 */
@property(nonatomic, assign) FYBLoggingLevel logLevel;

/**
 * Enables or disables network specific logging mechanisms
 */
@property(nonatomic, assign) BOOL thirdPartyLoggingEnabled;

/**
 * Disable auto requesting behaviour
 */
@property(nonatomic, assign) BOOL autoRequestingEnabled;

@end
