/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKiMIPHandler : NSObject {
    EKEvent * _event;
}

@property (retain) EKEvent *event;

+ (id)emailsFromAttendees:(id)arg1;
+ (bool)shouldSendEmailForEvent:(id)arg1 withDiff:(id)arg2;

- (void).cxx_destruct;
- (id)attachmentData;
- (id)attendees;
- (id)emailAttachmentName;
- (id)emailBody;
- (id)emailSubject;
- (id)event;
- (id)iCalendarDocumentWithMethod:(int)arg1;
- (int)icsMethod;
- (id)initWithEvent:(id)arg1;
- (bool)sendEmail;
- (void)setEvent:(id)arg1;

@end
