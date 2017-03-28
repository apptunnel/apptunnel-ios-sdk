//
//  ATFeatureFlagResult.h
//  AppTunnel

#import <Foundation/Foundation.h>

@class ATFeatureFlagVariation;

@interface ATFeatureFlagResult : NSObject <NSCopying>

@property (nonatomic, strong) NSString *featureFlagId;
@property (nonatomic, strong) NSString *featureFlagName;
@property (nonatomic, strong) ATFeatureFlagVariation *variation;

- (instancetype)initAsUndefinedObject:(NSString *)featureFlagId;

@end
