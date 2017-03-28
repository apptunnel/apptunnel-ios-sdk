//
//  ATABTestVariation.h
//  AppTunnel

#import <Foundation/Foundation.h>

@interface ATABTestVariation : NSObject <NSCopying>

@property (nonatomic, strong) NSString *abTestVariationId;
@property (nonatomic, strong) NSString *abTestVariationName;
@property (nonatomic, readwrite) id jsonValues;
@property (nonatomic, readwrite) BOOL isWinner;

- (instancetype)initAsUndefinedObject;

@end
