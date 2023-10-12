/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding> {
    unsigned long long  _lastSupportedMessageType;
}

@property (nonatomic, readonly) unsigned long long lastSupportedMessageType;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithAllSupportedMessages;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastSupportedMessageType:(unsigned long long)arg1;
- (bool)isSupported:(unsigned long long)arg1;
- (unsigned long long)lastSupportedMessageType;

@end
