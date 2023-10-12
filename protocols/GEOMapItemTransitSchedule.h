/* Generated by RuntimeBrowser.
 */

@protocol GEOMapItemTransitSchedule <NSObject>

@required

- (NSArray *)allSequencesForSystem:(id <GEOTransitSystem>)arg1 container:(NSString *)arg2;
- (NSArray *)allSequencesForSystem:(id <GEOTransitSystem>)arg1 direction:(NSString *)arg2;
- (NSArray *)departureSequenceContainersForSystem:(void *)arg1 excludingIncidentEntities:(void *)arg2 validForDateFromBlock:(void *)arg3; // needs 3 arg types, found 8: <GEOTransitSystem> *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDate *, id /* block */, <GEOTransitDepartureSequence> *, void*
- (NSArray *)departureSequences;
- (NSArray *)departureSequencesForSystem:(void *)arg1 excludingIncidentEntities:(void *)arg2 container:(void *)arg3 validForDateFromBlock:(void *)arg4; // needs 4 arg types, found 9: <GEOTransitSystem> *, NSSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDate *, id /* block */, <GEOTransitDepartureSequence> *, void*
- (NSArray *)departureSequencesForSystem:(void *)arg1 excludingIncidentEntities:(void *)arg2 direction:(void *)arg3 validForDateFromBlock:(void *)arg4; // needs 4 arg types, found 9: <GEOTransitSystem> *, NSSet *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDate *, id /* block */, <GEOTransitDepartureSequence> *, void*
- (NSArray *)directionsForSystem:(void *)arg1 excludingIncidentEntities:(void *)arg2 validForDateFromBlock:(void *)arg3 hasSequencesWithNoDirection:(void *)arg4; // needs 4 arg types, found 9: <GEOTransitSystem> *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDate *, id /* block */, <GEOTransitDepartureSequence> *, void*, out bool*
- (NSOrderedSet *)headSignsForLine:(id <GEOTransitLine>)arg1;
- (NSArray *)inactiveLinesForSystem:(void *)arg1 relativeToDateFromBlock:(void *)arg2 excludingIncidentEntities:(void *)arg3 usingContainers:(void *)arg4; // needs 4 arg types, found 9: <GEOTransitSystem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDate *, id /* block */, <GEOTransitDepartureSequence> *, void*, NSSet *, bool
- (NSDate *)lastFullScheduleValidDate;
- (unsigned long long)numAdditionalDeparturesForSequence:(id <GEOTransitDepartureSequence>)arg1;
- (GEOMapItemTransitLineResumeResult *)serviceResumesResultForLine:(id <GEOTransitLine>)arg1 excludingIncidentEntities:(NSSet *)arg2 afterDate:(NSDate *)arg3 usingContainers:(bool)arg4;
- (NSString *)subtitle;
- (double)timeToLive;
- (NSString *)title;

@end
