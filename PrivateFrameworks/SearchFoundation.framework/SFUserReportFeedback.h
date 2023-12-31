/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFUserReportFeedback : SFFeedback <NSCopying> {
    SFCardSection * _cardSection;
    int  _reportType;
    SFSearchResult * _result;
    NSArray * _sections;
    NSString * _uploadedDataIdentifier;
    SFPunchout * _userSelection;
}

@property (nonatomic, retain) SFCardSection *cardSection;
@property (nonatomic) int reportType;
@property (nonatomic, retain) SFSearchResult *result;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSString *uploadedDataIdentifier;
@property (nonatomic, retain) SFPunchout *userSelection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardSection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3;
- (id)initWithSelection:(id)arg1 result:(id)arg2 cardSection:(id)arg3 resultSections:(id)arg4 uploadedDataIdentifier:(id)arg5 userReportRequestType:(int)arg6;
- (int)reportType;
- (id)result;
- (id)sections;
- (void)setCardSection:(id)arg1;
- (void)setReportType:(int)arg1;
- (void)setResult:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setUploadedDataIdentifier:(id)arg1;
- (void)setUserSelection:(id)arg1;
- (id)uploadedDataIdentifier;
- (id)userSelection;

@end
