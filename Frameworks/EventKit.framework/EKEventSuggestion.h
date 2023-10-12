/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventSuggestion : NSObject <NSCopying> {
    NSURL * _URL;
    NSArray * _alarms;
    bool  _allDay;
    NSArray * _attachments;
    NSArray * _attendees;
    long long  _availability;
    EKEvent * _cachedEventFromSuggestion;
    EKCalendar * _calendar;
    NSDate * _endDate;
    EKStructuredLocation * _endLocation;
    NSTimeZone * _endTimeZone;
    bool  _isZKWSuggestion;
    NSData * _localStructuredData;
    NSString * _location;
    NSString * _notes;
    long long  _privacyLevel;
    NSArray * _recurrenceRules;
    EKAutocompleteSearchResult * _referenceResult;
    NSDate * _startDate;
    EKStructuredLocation * _structuredLocation;
    EKSuggestedEventInfo * _suggestionInfo;
    NSTimeZone * _timeZone;
    NSString * _title;
}

@property (retain) NSURL *URL;
@property (retain) NSArray *alarms;
@property bool allDay;
@property (retain) NSArray *attachments;
@property (retain) NSArray *attendees;
@property long long availability;
@property (retain) EKEvent *cachedEventFromSuggestion;
@property (retain) EKCalendar *calendar;
@property (retain) NSDate *endDate;
@property (retain) EKStructuredLocation *endLocation;
@property (retain) NSTimeZone *endTimeZone;
@property bool isZKWSuggestion;
@property (retain) NSData *localStructuredData;
@property (retain) NSString *location;
@property (retain) NSString *notes;
@property long long privacyLevel;
@property (retain) NSArray *recurrenceRules;
@property (retain) EKAutocompleteSearchResult *referenceResult;
@property (retain) NSDate *startDate;
@property (retain) EKStructuredLocation *structuredLocation;
@property (retain) EKSuggestedEventInfo *suggestionInfo;
@property (retain) NSTimeZone *timeZone;
@property (retain) NSString *title;

+ (id)allProperties;
+ (id)propertiesForEquality;
+ (id)similarityPropertiesConsideringTimeProperties:(bool)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_attendeesForSuggestedEventFromAttendees:(id)arg1;
- (id)alarms;
- (bool)allDay;
- (id)attachments;
- (id)attendees;
- (long long)availability;
- (id)cachedEventFromSuggestion;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endDate;
- (id)endLocation;
- (id)endTimeZone;
- (id)eventFromSuggestion;
- (unsigned long long)hash;
- (bool)isDifferentEnoughFromInitialEvent:(id)arg1 consideringTimeProperties:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isZKWSuggestion;
- (id)localStructuredData;
- (id)location;
- (id)notes;
- (long long)privacyLevel;
- (id)recurrenceRules;
- (id)referenceResult;
- (void)setAlarms:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setCachedEventFromSuggestion:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setEndLocation:(id)arg1;
- (void)setEndTimeZone:(id)arg1;
- (void)setIsZKWSuggestion:(bool)arg1;
- (void)setLocalStructuredData:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setPrivacyLevel:(long long)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setReferenceResult:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setSuggestionInfo:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)startDate;
- (id)structuredLocation;
- (id)suggestionInfo;
- (id)timeZone;
- (id)title;

@end