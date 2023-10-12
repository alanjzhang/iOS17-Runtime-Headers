/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPEngagementShareRatio : PBCodable <NSSecureCoding, _CPEngagementShareRatio> {
    float  _shareOfEngagements;
    float  _shareOfInternetEngagements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float shareOfEngagements;
@property (nonatomic) float shareOfInternetEngagements;
@property (readonly) Class superclass;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShareOfEngagements:(float)arg1;
- (void)setShareOfInternetEngagements:(float)arg1;
- (float)shareOfEngagements;
- (float)shareOfInternetEngagements;
- (void)writeTo:(id)arg1;

@end
