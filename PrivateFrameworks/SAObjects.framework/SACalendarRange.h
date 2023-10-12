/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarRange : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SACalendar *end;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SACalendar *start;
@property (readonly) Class superclass;

+ (id)calendarRange;
+ (id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)end;
- (id)groupIdentifier;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end