//
//  ATABTestResult.h
//  AppTunnel

#import <Foundation/Foundation.h>

@class ATABTestVariation;

@interface ATABTestResult : NSObject <NSCopying>

@property (nonatomic, strong) NSString *abTestId;
@property (nonatomic, strong) NSString *abTestName;
@property (nonatomic, strong) ATABTestVariation *variation;

- (instancetype)initAsUndefinedObject:(NSString *)abTestId;

@end
