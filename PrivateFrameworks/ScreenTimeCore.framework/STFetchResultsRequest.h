/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STFetchResultsRequest : NSObject {
    NSFetchRequest * _fetchRequest;
}

@property (nonatomic, readonly) NSFetchRequest *fetchRequest;

+ (id)requestWithFetchRequest:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)fetchRequest;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithFetchRequest:(id)arg1;

@end