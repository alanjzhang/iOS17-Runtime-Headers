/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassKitClassPropertyApplicator : NSObject {
    <CRKClassKitRosterRequirements> * _requirements;
}

@property (nonatomic, readonly) <CRKClassKitRosterRequirements> *requirements;

- (void).cxx_destruct;
- (void)addTrustedUser:(id)arg1 toClass:(id)arg2;
- (void)addUser:(id)arg1 toClass:(id)arg2;
- (bool)additionsAndRemovalsIntersect:(id)arg1;
- (id)applyProperties:(id)arg1 toClass:(id)arg2 error:(id*)arg3;
- (id)identifiersOfUsers:(id)arg1;
- (id)initWithRequirements:(id)arg1;
- (void)removeTrustedUser:(id)arg1 fromClass:(id)arg2;
- (void)removeUser:(id)arg1 fromClass:(id)arg2;
- (id)requirements;

@end
