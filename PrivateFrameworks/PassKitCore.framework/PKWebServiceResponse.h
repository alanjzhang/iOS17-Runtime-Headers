/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKWebServiceResponse : NSObject <NSSecureCoding> {
    id  _JSONObject;
    NSDictionary * _headers;
    NSData * _rawData;
}

@property (nonatomic, readonly) id JSONObject;
@property (nonatomic, readonly) NSDictionary *headers;
@property (nonatomic, readonly) NSData *rawData;

+ (bool)jsonDataOptional;
+ (id)responseWithData:(id)arg1;
+ (id)responseWithData:(id)arg1 headers:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObject;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)headers;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 headers:(id)arg2;
- (id)rawData;

@end
