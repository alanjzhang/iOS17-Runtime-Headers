/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding> {
    NSString * _pcsDiagnosticString;
    NSError * _pcsError;
    int  _pcsStatus;
    bool  _wasRepaired;
}

@property (nonatomic, retain) NSString *pcsDiagnosticString;
@property (nonatomic, retain) NSError *pcsError;
@property (nonatomic) int pcsStatus;
@property (nonatomic) bool wasRepaired;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pcsDiagnosticString;
- (id)pcsError;
- (int)pcsStatus;
- (void)setPcsDiagnosticString:(id)arg1;
- (void)setPcsError:(id)arg1;
- (void)setPcsStatus:(int)arg1;
- (void)setWasRepaired:(bool)arg1;
- (bool)wasRepaired;

@end
