//
//  DetailViewController.h
//  StreetMusicMap
//
//  Created by Henrique Velloso on 3/25/15.
//  Copyright (c) 2015 TrueTapp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InstagramKit.h"
#import "UIImageView+UIActivityIndicatorForSDWebImage.h"


@interface DetailViewController : UIViewController

@property (strong, nonatomic) InstagramMedia *currentMedia;

@property (weak, nonatomic) IBOutlet UITableView *TableViewDetail;

@property (weak, nonatomic) IBOutlet UIView *viewComments;
@property (weak, nonatomic) IBOutlet UIButton *btnLike;
@property (weak, nonatomic) IBOutlet UIButton *btnSendComment;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintBottom;


@end