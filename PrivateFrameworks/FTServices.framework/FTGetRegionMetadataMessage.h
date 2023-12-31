/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying> {
    NSString * _language;
    NSDictionary * _responseRegionInformation;
}

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (void).cxx_destruct;
- (id)bagKey;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)language;
- (id)messageBody;
- (id)requiredKeys;
- (long long)responseCommand;
- (id)responseRegionInformation;
- (void)setLanguage:(id)arg1;
- (void)setResponseRegionInformation:(id)arg1;
- (bool)wantsBagKey;
- (bool)wantsBinaryPush;
- (bool)wantsCompressedBody;
- (bool)wantsHTTPGet;
- (bool)wantsHTTPHeaders;

@end
