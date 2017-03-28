//
//  ATFeatureFlagVariation.h
//  AppTunnel

#import <Foundation/Foundation.h>

@interface ATFeatureFlagVariation : NSObject <NSCopying>

@property (nonatomic, strong) NSString *featureFlagVariationId;
@property (nonatomic, strong) NSString *featureFlagVariationName;
@property (nonatomic, readwrite) id jsonValues;

- (instancetype)initAsUndefinedObject;

@end
