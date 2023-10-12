/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDate : ICSProperty

@property (nonatomic, retain) NSString *tzid;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (id)components;
- (id)description;
- (bool)hasFloatingTimeZone;
- (bool)hasTimeComponent;
- (id)initWithValue:(id)arg1;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (void)setTzid:(id)arg1;
- (id)tzid;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

// ICSDate (SGCalendarAttachmentDissector)

- (id)copyDateWithNewComponents:(id)arg1;
- (id)gmtOffsetTimeZoneWithCalendar:(id)arg1 withEvent:(id)arg2;
- (id)systemTimeZoneWithCalendar:(id)arg1 withEvent:(id)arg2 withCorrectnessFlag:(bool*)arg3;
- (id)validatedCompleteDateTime;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

// ICSDate (ReminderKitAdditions)

- (id)rem_dateAsUTC;
- (id)rem_dateWithICSCalendar:(id)arg1;

@end
