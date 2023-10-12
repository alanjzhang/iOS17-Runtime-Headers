/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITypologyRecord : NSObject <NSSecureCoding> {
    NSUUID * _recordID;
    double  _timestamp;
}

@property (nonatomic, retain) NSUUID *recordID;
@property (nonatomic) double timestamp;

+ (id)recordClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changedText;
- (id)currentKeyboardState;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)recordID;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)shortDescription;
- (id)textSummary;
- (id)textSummaryForAutocorrection:(id)arg1;
- (double)timestamp;

// TITypologyRecord (TITypologyStatistic)

- (void)applyToStatistic:(id)arg1;

@end
