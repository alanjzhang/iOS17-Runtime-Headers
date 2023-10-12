/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDataSeparationBlockingClassKitFacade : CRKClassKitFacadeDecoratorBase {
    CRKClassKitCurrentUserProvider * _currentUserProvider;
    long long  _modifiedAccountState;
}

@property (nonatomic, readonly) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (nonatomic) long long modifiedAccountState;

+ (id)keyPathsForValuesAffectingAccountState;
+ (id)observedKeyPathsOnCurrentUserProvider;

- (void).cxx_destruct;
- (long long)accountState;
- (id)currentUserProvider;
- (void)dealloc;
- (id)initWithClassKitFacade:(id)arg1;
- (long long)modifiedAccountState;
- (long long)nextAccountState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setModifiedAccountState:(long long)arg1;
- (void)startObserving;
- (void)stopObserving;
- (void)updateAccountState;

@end
