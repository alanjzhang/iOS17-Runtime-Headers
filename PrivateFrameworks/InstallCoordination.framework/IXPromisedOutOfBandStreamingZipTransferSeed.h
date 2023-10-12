/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPromisedOutOfBandStreamingZipTransferSeed : IXOpaqueDataPromiseSeed <NSCopying, NSSecureCoding> {
    unsigned long long  _archiveBytesConsumed;
    unsigned long long  _archiveSizeBytes;
    NSURL * _extractionPath;
    NSDictionary * _szOptions;
}

@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (nonatomic) unsigned long long archiveSizeBytes;
@property (nonatomic, retain) NSURL *extractionPath;
@property (nonatomic, copy) NSDictionary *szOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)archiveBytesConsumed;
- (unsigned long long)archiveSizeBytes;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extractionPath;
- (id)initWithCoder:(id)arg1;
- (void)setArchiveBytesConsumed:(unsigned long long)arg1;
- (void)setArchiveSizeBytes:(unsigned long long)arg1;
- (void)setExtractionPath:(id)arg1;
- (void)setSzOptions:(id)arg1;
- (id)szOptions;

@end
