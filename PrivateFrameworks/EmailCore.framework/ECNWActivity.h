/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECNWActivity : NSObject {
    NSObject<OS_nw_activity> * _activity;
    NSObject<OS_nw_connection> * _currentConnection;
}

+ (void)attachCurrentActivityToConnection:(id)arg1;
+ (void)detachCurrentActivityFromConnection:(id)arg1;

- (void).cxx_destruct;
- (id)initWithDomain:(unsigned int)arg1 type:(unsigned int)arg2;
- (void)startActivity;
- (void)stopActivityWithSuccess:(bool)arg1;

@end