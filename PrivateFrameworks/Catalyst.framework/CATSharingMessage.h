/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATSharingMessage : NSObject <CATDictionaryCodable> {
    NSDictionary * _contentDictionaryValue;
    long long  _messageType;
}

@property (nonatomic, readonly, copy) NSDictionary *contentDictionaryValue;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) long long messageType;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)contentDictionaryValue;
- (id)dictionaryValue;
- (id)initWithContentMessage:(id)arg1;
- (id)initWithMessageType:(long long)arg1 contentDictionary:(id)arg2;
- (long long)messageType;

@end