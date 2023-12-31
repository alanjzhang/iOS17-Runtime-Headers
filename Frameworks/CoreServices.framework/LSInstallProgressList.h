/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSInstallProgressList : NSObject {
    NSMutableDictionary * _progresses;
    NSMutableDictionary * _subscriptions;
}

- (void).cxx_destruct;
- (void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3;
- (id)description;
- (id)init;
- (id)progressForBundleID:(id)arg1;
- (void)removeProgressForBundleID:(id)arg1;
- (void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2;
- (void)setProgress:(id)arg1 forBundleID:(id)arg2;
- (id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2;

@end
