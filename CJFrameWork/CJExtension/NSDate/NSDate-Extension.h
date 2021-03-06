//
//  DateUtil.h
//  Useek
//
//  Created by Eric Li on 11-3-1.
//  Copyright 2011 Active. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (FoxExtension)
+ (NSDate   *) dateInitNow ;
+ (NSDate   *) dateInitWithString:(NSString *)string;
+ (NSString *) currentMilliSecond;
- (NSString *) formatDate:(NSString*)format;
- (NSString *) currentMilliSecond;

+ (NSString *)currentUTCSecond;
+ (NSDate *)getDateTimeFromMilliSeconds:(long long) miliSeconds;
+ (NSDate *)getGMTTimeFromMilliSeconds:(long long) miliSeconds;
+ (long long)getDateTimeTOMilliSeconds:(NSDate *)datetime;
+ (NSInteger )secBetweenDateFrom:(NSDate *)fromDate to:(NSDate*)toDate;

+ (NSInteger )diffSecond:(long long)fsecond to:(long long)tsecond;
@end


@interface NSDate (ext)
+ (NSDate *)UTCWithDate:(NSDate *)date;
+ (NSDate *)GMTWithDate:(NSDate *)date;

+ (long long)milliSecondsWithDate:(NSDate *)date;
+ (NSDate *)dateForMilliSeconds:(long long)millSeconds;

+ (NSString *)localUTCSeconds;
@end

@interface NSDate (xdate)
+ (NSString *)timestamp;
+ (NSDate *)dateWithTimestamp:(NSString *)timestamp;
@end