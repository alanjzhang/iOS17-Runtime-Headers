/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVEventWaiter : NSObject {
    NSCondition * _condition;
    bool  _eventCompleted;
}

- (void)dealloc;
- (id)init;
- (void)markEventAsCompleted;
- (void)waitUntilEventIsCompleted;

@end
