/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQueryServerClientState : NSObject <NSCopying> {
    unsigned int  _applicationState;
}

@property (nonatomic, readonly) unsigned int applicationState;
@property (getter=isBackgroundRunning, nonatomic, readonly) bool backgroundRunning;
@property (getter=isForeground, nonatomic, readonly) bool foreground;
@property (getter=isSuspended, nonatomic, readonly) bool suspended;

- (unsigned int)applicationState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithApplicationState:(unsigned int)arg1;
- (bool)isBackgroundRunning;
- (bool)isForeground;
- (bool)isSuspended;

@end
