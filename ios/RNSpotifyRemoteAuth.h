#import <UIKit/UIKit.h>
#import <SpotifyiOS/SpotifyiOS.h>
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import "RNSpotifyRemotePromise.h"

@interface RNSpotifyRemoteAuth : NSObject<RCTBridgeModule>

-(BOOL)application:(UIApplication *)application openURL:(NSURL *)URL options:(NSDictionary<UIApplicationOpenURLOptionsKey, id> *)options;

+(instancetype)sharedInstance;

-(void)initialize:(NSDictionary*)options resolve:(RCTPromiseResolveBlock)resolve reject:(RCTPromiseRejectBlock)reject;

-(SPTConfiguration*) configuration;
-(NSString*) accessToken;
@end
