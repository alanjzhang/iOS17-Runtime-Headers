/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentShareDeleteRequest : PHObjectDeleteRequest {
    long long  _operation;
}

@property (nonatomic) long long operation;

- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (long long)operation;
- (void)setOperation:(long long)arg1;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
