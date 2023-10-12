/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTReplayUpdateLibraryCache : GTReplayRequest <NSSecureCoding> {
    NSData * _data;
    NSString * _uuid;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setData:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
