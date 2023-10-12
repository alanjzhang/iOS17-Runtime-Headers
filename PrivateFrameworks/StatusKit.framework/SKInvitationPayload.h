/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKit.framework/StatusKit
 */

@interface SKInvitationPayload : NSObject <NSSecureCoding> {
    NSDictionary * _cachedPayloadDictionary;
    NSDate * _dateCreated;
    NSData * _payloadData;
}

@property (nonatomic, retain) NSDictionary *cachedPayloadDictionary;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSData *payloadData;
@property (nonatomic, readonly) NSDictionary *payloadDictionary;

+ (id)logger;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedPayloadDictionary;
- (id)dateCreated;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 dateCreated:(id)arg2;
- (id)payloadData;
- (void)setCachedPayloadDictionary:(id)arg1;

// SKInvitationPayload (DictionaryPayloads)

- (id)initWithDictionary:(id)arg1 dateCreated:(id)arg2;
- (id)payloadDictionary;

@end
