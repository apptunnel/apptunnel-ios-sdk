//
//  AppTunnel.h
//  AppTunnel

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ATABTestResult.h"
#import "ATABTestVariation.h"
#import "ATFeatureFlagResult.h"
#import "ATFeatureFlagVariation.h"
#import "ATSettings.h"

typedef void (^AppTunnelFetchDoneBlock)(NSArray *abTests, NSArray *featureFlags, NSError *error);

@interface AppTunnel : NSObject

+ (void)startAppTunnelWithApiKey:(NSString *)apiKey
                            projectKey:(NSString *)projectKey
                     environment:(AppTunnelEnvironment)environment;

+ (void)getVariationsForABTests:(NSArray *)abTests
                   featureFlags:(NSArray *)featureFlags
                 withFetchBlock:(AppTunnelFetchDoneBlock)fetchDoneBlock;

+ (void)setUserId:(NSString *)userId;

@end
