/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATIDSServiceConnectionMetadata : NSObject {
    NSUUID * _connectionIdentifier;
    NSString * _destinationAppleID;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSUUID *connectionIdentifier;
@property (nonatomic, readonly, copy) NSString *destinationAppleID;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)connectionIdentifier;
- (id)description;
- (id)destinationAppleID;
- (unsigned long long)hash;
- (id)initWithConnectionIdentifier:(id)arg1 destinationAppleID:(id)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMetadata:(id)arg1;
- (id)userInfo;

@end