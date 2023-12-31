/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBEntitlementPredicate : NSObject <NSCopying> {
    unsigned long long  _count;
}

@property (readonly) unsigned long long count;

+ (id)predicateForObject:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4;

- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (bool)matchesEntitlements:(id)arg1;

@end
