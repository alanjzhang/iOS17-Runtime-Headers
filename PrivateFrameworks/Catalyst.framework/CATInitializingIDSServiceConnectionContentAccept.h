/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATInitializingIDSServiceConnectionContentAccept : NSObject <CATInitializingIDSServiceConnectionMessageContent> {
    NSUUID * _connectionIdentifier;
}

@property (nonatomic, readonly) NSUUID *connectionIdentifier;
@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)connectionIdentifier;
- (long long)contentType;
- (id)dictionaryValue;
- (id)initWithConnectionIdentifier:(id)arg1;

@end
