/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface MessageProtection.GFTKeyWrapper : NSObject

+ (id)decrypt:(id)arg1 using:(struct __SecKey { }*)arg2 error:(id*)arg3;
+ (id)encrypt:(id)arg1 to:(struct __SecKey { }*)arg2 error:(id*)arg3;
+ (id)unwrapWrappedSeed:(id)arg1 legacy:(bool)arg2 using:(struct __SecKey { }*)arg3 error:(id*)arg4;
+ (id)wrapSeed:(id)arg1 to:(id)arg2 legacy:(bool)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)init;

@end
