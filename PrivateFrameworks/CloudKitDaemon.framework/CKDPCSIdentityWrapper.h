/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSIdentityWrapper : NSObject {
    struct _PCSIdentitySetData { } * _identitySet;
    NSString * _identityString;
    NSString * _primaryServiceName;
}

@property (nonatomic, readonly) struct _PCSIdentitySetData { }*identitySet;
@property (nonatomic, readonly) NSString *identityString;
@property (nonatomic, readonly) NSString *primaryServiceName;

- (void).cxx_destruct;
- (void)dealloc;
- (struct _PCSIdentitySetData { }*)identitySet;
- (id)identityString;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData { }*)arg1 withPrimaryServiceName:(id)arg2;
- (id)primaryServiceName;

@end
