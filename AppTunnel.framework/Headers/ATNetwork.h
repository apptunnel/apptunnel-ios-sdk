//
//  ATNetwork.h
//  AppTunnel

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    kATRequestTypeRegisterDevice,
    kATRequestTypeGetResults,
    kATRequestTypeSetCustomId
} ATRequestType;

typedef enum : NSUInteger {
    kAppTunnelEnvironmentSandbox,
    kAppTunnelEnvironmentProduction
} AppTunnelEnvironment;

@protocol ATNetworkDelegate

- (void)abTests:(NSArray *)abTests
   featureFlags:(NSArray *)featureFlags
          error:(NSError *)error;

@end

@interface ATNetwork : NSObject

- (instancetype)initWithApiKey:(NSString *)apiKey
                    projectKey:(NSString *)projectKey
                     isSandbox:(BOOL)isSandbox
                      delegate:(id<ATNetworkDelegate>)delegate;

- (void)getVariationsForABTests:(NSArray *)abTests
                   featureFlags:(NSArray *)featureFlags;
- (BOOL)setCustomUserId:(NSString *)userId;

@end
