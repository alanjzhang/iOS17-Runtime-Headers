/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADCompoundFilter : CADFilter {
    NSArray * _filters;
    long long  _operation;
}

@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) long long operation;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applicableToEntityType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;
- (id)filters;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilters:(id)arg1 operation:(long long)arg2;
- (long long)operation;
- (bool)validate;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit

// CADCompoundFilter (EKPredicateEvaluating)

- (bool)ekPredicateFilterMatches:(id)arg1;

@end
