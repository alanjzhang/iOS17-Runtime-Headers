/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBCloudZoneFetchRecordsContext : HMFObject {
    NAFuture * _future;
    NSSet * _recordIDs;
}

@property (readonly) NAFuture *future;
@property (readonly, copy) NSSet *recordIDs;

- (void).cxx_destruct;
- (id)future;
- (id)initWithRecordIDs:(id)arg1 future:(id)arg2;
- (id)recordIDs;

@end
