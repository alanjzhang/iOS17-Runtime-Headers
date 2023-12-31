/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTTelemetryRequest : NSObject <NSSecureCoding> {
    unsigned long long  _requestID;
}

@property (nonatomic) unsigned long long requestID;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initNoRequestID;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)requestID;
- (void)setRequestID:(unsigned long long)arg1;

@end
