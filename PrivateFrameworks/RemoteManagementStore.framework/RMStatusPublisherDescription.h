/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteManagementStore.framework/RemoteManagementStore
 */

@interface RMStatusPublisherDescription : NSObject {
    NSSet * _statusKeys;
    NSDictionary * _statusKeysByXPCEvent;
}

@property (nonatomic, readonly, copy) NSSet *statusKeys;
@property (nonatomic, readonly, copy) NSDictionary *statusKeysByXPCEvent;

+ (id)descriptionWithEventsDictionary:(id)arg1;
+ (id)descriptionWithServiceDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)_validateStatusEvents:(id)arg1;
- (bool)_validateStatusKeysByNotification:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStatusEvents:(id)arg1;
- (id)initWithStatusKeysByNotification:(id)arg1;
- (id)statusKeys;
- (id)statusKeysByXPCEvent;

@end
