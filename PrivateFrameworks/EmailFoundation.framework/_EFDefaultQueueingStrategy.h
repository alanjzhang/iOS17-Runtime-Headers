/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface _EFDefaultQueueingStrategy : NSObject <EFQueueingStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (id)descriptionType;
- (void)enqueueObject:(id)arg1 replaceIfExists:(bool)arg2 buffer:(id)arg3;

@end
