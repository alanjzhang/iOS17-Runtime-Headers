/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKConcreteNetworkPath : NSObject <CRKNetworkPath> {
    NSArray * _interfaces;
    NSObject<OS_nw_path> * _underlyingPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *interfaces;
@property (getter=isSatisfied, nonatomic, readonly) bool satisfied;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_nw_path> *underlyingPath;

- (void).cxx_destruct;
- (id)initWithUnderlyingPath:(id)arg1;
- (id)interfaces;
- (bool)isSatisfied;
- (id)underlyingPath;

@end
