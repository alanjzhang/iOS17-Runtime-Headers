/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSApplicationDataStoreClientFactory : NSObject {
    unsigned long long  _count;
    NSArray * _prefetchedKeys;
    NSObject<OS_dispatch_queue> * _queue;
    <FBSApplicationDataStoreRepositoryClient> * _sharedClient;
}

@property (nonatomic, retain) NSArray *prefetchedKeys;

+ (bool)isServerProcess;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)checkin;
- (id)checkout;
- (id)init;
- (id)prefetchedKeys;
- (void)setPrefetchedKeys:(id)arg1;

@end
