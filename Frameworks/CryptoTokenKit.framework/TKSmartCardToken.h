/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardToken : TKToken {
    NSData * _AID;
    id  _keepAlive;
    TKSmartCard * _smartCard;
}

@property (readonly) NSData *AID;
@property (nonatomic, retain) id keepAlive;
@property (nonatomic, readonly) TKSmartCard *smartCard;

- (void).cxx_destruct;
- (id)AID;
- (id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4;
- (id)keepAlive;
- (void)setKeepAlive:(id)arg1;
- (id)smartCard;

@end
