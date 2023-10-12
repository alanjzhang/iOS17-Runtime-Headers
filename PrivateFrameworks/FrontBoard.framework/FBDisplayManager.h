/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayManager : FBSDisplayMonitor

@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainDisplay;

+ (id)mainConfiguration;
+ (id)mainDisplay;
+ (id)mainIdentity;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (id)mainDisplay;
- (void)postBookendConnections;
- (void)updateTransformsWithCompletion:(id /* block */)arg1;

@end
