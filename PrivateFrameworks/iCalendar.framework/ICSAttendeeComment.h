/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSAttendeeComment : ICSProperty

@property (nonatomic, retain) NSString *x_calendarserver_attendee_ref;
@property (nonatomic, retain) ICSDateValue *x_calendarserver_dtstamp;

- (id)initWithComment:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setX_calendarserver_attendee_ref:(id)arg1;
- (void)setX_calendarserver_dtstamp:(id)arg1;
- (bool)shouldObscureParameter:(id)arg1;
- (bool)shouldObscureValue;
- (id)x_calendarserver_attendee_ref;
- (id)x_calendarserver_dtstamp;

@end
